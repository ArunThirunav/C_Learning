#include "E:/uGFX/ugfx_2.9/gfx.h"
#include "math.h"

// A set of data points that will be displayed in the graph
static const point data[5] = {
    { -40, -40 },
    { 70, 40 },
    { 140, 60 },
    { 210, 60 },
    { 280, 200 }
};

// The graph object
static GGraphObject g;

// A graph styling
static GGraphStyle GraphStyle1 = {
    { GGRAPH_POINT_DOT, 0, Blue },          // Point
    { GGRAPH_LINE_NONE, 2, Gray },          // Line
    { GGRAPH_LINE_SOLID, 0, White },        // X axis
    { GGRAPH_LINE_SOLID, 0, White },        // Y axis
    { GGRAPH_LINE_DASH, 5, Gray, 50 },      // X grid
    { GGRAPH_LINE_DOT, 7, Yellow, 50 },     // Y grid
    GWIN_GRAPH_STYLE_POSITIVE_AXIS_ARROWS   // Flags
};

// Another graph styling
static const GGraphStyle GraphStyle2 = {
    { GGRAPH_POINT_SQUARE, 5, Red },        // Point
    { GGRAPH_LINE_DOT, 2, Pink },           // Line
    { GGRAPH_LINE_SOLID, 0, White },        // X axis
    { GGRAPH_LINE_SOLID, 0, White },        // Y axis
    { GGRAPH_LINE_DASH, 5, Gray, 50 },      // X grid
    { GGRAPH_LINE_DOT, 7, Yellow, 50 },     // Y grid
    GWIN_GRAPH_STYLE_POSITIVE_AXIS_ARROWS   // Flags
};

int main(void) {
    GHandle     gh;
    uint16_t    i;

    gfxInit();

    // Create the graph window
    {
        GWindowInit wi;

        wi.show = TRUE;
        wi.x = wi.y = 0;
        wi.width = gdispGetWidth();
        wi.height = gdispGetHeight();
        gh = gwinGraphCreate(&g, &wi);
    }

    // Set the graph origin and style
    gwinGraphSetOrigin(gh, gwinGetWidth(gh)/2, gwinGetHeight(gh)/2);
    gwinGraphSetStyle(gh, &GraphStyle1);
    gwinGraphDrawAxis(gh);

    // Draw a sine wave
    for(i = 0; i < gwinGetWidth(gh); i++) {
        gwinGraphDrawPoint(gh, i-gwinGetWidth(gh)/2, 80*sin(2*0.2*M_PI*i/180));
    }

    // Modify the style
    gwinGraphStartSet(gh);
    GraphStyle1.point.color = Green;
    gwinGraphSetStyle(gh, &GraphStyle1);

    // Draw a different sine wave
    for(i = 0; i < gwinGetWidth(gh)*5; i++) {
        gwinGraphDrawPoint(gh, i/5-gwinGetWidth(gh)/2, 95*sin(2*0.2*M_PI*i/180));
    }

    // Change to a completely different style
    gwinGraphStartSet(gh);
    gwinGraphSetStyle(gh, &GraphStyle2);

    // Draw a set of points
    gwinGraphDrawPoints(gh, data, sizeof(data)/sizeof(data[0]));

    while(TRUE) {
        gfxSleepMilliseconds(100);
    }
}
