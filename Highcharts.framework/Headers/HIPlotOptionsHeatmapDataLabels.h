/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* Any commercial use of Highcharts iOS wrapper (beta version) is prohibited.
* In case of questions, please contact sales@highsoft.com
*/

#import "HIChartsJSONSerializable.h"
#import "HIColor.h"


/**
* description: Options for the series data labels, appearing next to each data point.
In http://www.highcharts.com/docs/chart-design-and-style/style-by-css : styled mode, the data labels can be styled wtih the .highcharts-data-label-box and .highcharts-data-label class names (see example).
*/
@interface HIPlotOptionsHeatmapDataLabels: HIChartsJSONSerializable

/**
* description: The name of a symbol to use for the border around the label. Symbols are predefined functions on the Renderer object.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-shape/ : A callout for annotations
* default: square
*/
@property(nonatomic, readwrite) NSString *shape;
/**
* description: Enable or disable the data labels.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-enabled/ : Data labels enabled
* default: false
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *enabled;
/**
* description: Whether to defer displaying the data labels until the initial series animation has finished.
* default: true
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *defer;
/**
* description: For points with an extent, like columns, whether to align the data label inside the box or to the actual value point. Defaults to false in most cases, true in stacked columns.
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *inside;
/**
* description: Whether to allow data labels to overlap. To make the labels less sensitive for overlapping, the dataLabels.padding can be set to 0.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-allowoverlap-false/ : Don't allow overlap
* default: false
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *allowOverlap;
/**
* description: The background color or gradient for the data label. Defaults to undefined.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-box/ : Data labels box options
*/
@property(nonatomic, readwrite) HIColor *backgroundColor;
/**
* description: The vertical alignment of a data label. Can be one of top, middle or bottom. The default value depends on the data, for instance in a column chart, the label is above positive values and below negative values.
* accepted values: ["top", "middle", "bottom"]
*/
@property(nonatomic, readwrite) NSString *verticalAlign;
/**
* description: A class name for the data label. Particularly in http://www.highcharts.com/docs/chart-design-and-style/style-by-css : styled mode, this can be used to give each series' or point's data label unique styling. In addition to this option, a default color class name is added so that we can give the labels a http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/css/data-label-contrast/ : contrast text shadow.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/css/series-datalabels/ : Styling by CSS.
*/
@property(nonatomic, readwrite) NSString *className;
/**
* description: The shadow of the box. Works best with borderWidth or backgroundColor. Since 2.3 the shadow can be an object configuration containing color, offsetX, offsetY, opacity and width.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-box/ : Data labels box options
* default: false
*/
@property(nonatomic, readwrite) id /* Bool, Object */ shadow;
/**
* description: The border color for the data label. Defaults to undefined.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-box/ : Data labels box options
*/
@property(nonatomic, readwrite) HIColor *borderColor;
/**
* description: The Z index of the data labels. The default Z index puts it above the series. Use a Z index of 2 to display it behind the series.
* default: 6
*/
@property(nonatomic, readwrite) NSNumber *zIndex;
/**
* description: Whether to hide data labels that are outside the plot area. By default, the data label is moved inside the plot area according to the overflow option.
* default: true
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *crop;
/**
* description: Callback JavaScript function to format the data label. Note that if a format is defined, the format takes precedence and the formatter is ignored. Available data are:


this.percentage
Stacked series and pies only. The point's percentage of the total.


this.point
The point object. The point name, if defined, is available 
through this.point.name.


this.series:
The series object. The series name is available 
through this.series.name.


this.total
Stacked series only. The total value at this point's x value.


this.x:
The x value.


this.y:
The y value.


*/
@property(nonatomic, readwrite) NSString /* Function */ *formatter;
/**
* description: The x position offset of the label relative to the point. 
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-rotation/ : Vertical and positioned
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *x;
/**
* description: The border radius in pixels for the data label.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-box/ : Data labels box options
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *borderRadius;
/**
* description: Text rotation in degrees. Note that due to a more complex structure, backgrounds, borders and padding will be lost on a rotated data label.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-rotation/ : Vertical labels
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *rotation;
/**
* description: The y position offset of the label relative to the point. 
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-rotation/ : Vertical and positioned
* default: -6
*/
@property(nonatomic, readwrite) NSNumber *y;
/**
* description: The alignment of the data label compared to the point.  If right, the right side of the label should be touching the point. For points with an extent, like columns, the alignments also dictates how to align it inside the box, as given with the inside option. Can be one of "left", "center" or "right".
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-align-left/ : Left aligned.

http://jsfiddle.net/highcharts/72sbw0Lz/ : Understand alignment to boxes, lines and points.
* accepted values: ["left", "center", "right"]
* default: center
*/
@property(nonatomic, readwrite) NSString *align;
/**
* description: Styles for the label.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-style/ : Bold labels
* default: {"color": "contrast", "fontSize": "11px", "fontWeight": "bold", "textOutline": "1px 1px contrast" }
*/
@property(nonatomic, readwrite) NSDictionary /* <NSString, NSString> */ *style;
/**
* description: A http://www.highcharts.com/docs/chart-concepts/labels-and-string-formatting : format string for the data label. Available variables are the same as for formatter.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-format/ : Add a unit
* default: {y}
*/
@property(nonatomic, readwrite) NSString *format;
/**
* description: When either the borderWidth or the backgroundColor is set, this		is the padding within the box.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-box/ : Data labels box options
* default: 5
*/
@property(nonatomic, readwrite) NSNumber *padding;
/**
* description: Whether to http://www.highcharts.com/docs/chart-concepts/labels-and-string-formatting#html : use HTML to render the labels.
* default: false
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *useHTML;
/**
* description: The text color for the data labels. Defaults to null.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-color/ : Red data labels
*/
@property(nonatomic, readwrite) HIColor *color;
/**
* description: How to handle data labels that flow outside the plot area. The default is justify, which aligns them inside the plot area. For columns and bars, this means it will be moved inside the bar. To display data labels outside the plot area, set crop to false and overflow to "none".
* accepted values: ["justify", "none"]
* default: justify
*/
@property(nonatomic, readwrite) NSString *overflow;
/**
* description: The border width in pixels for the data label.
* demo: http://jsfiddle.net/gh/get/jquery/3.1.1/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/series-datalabels-box/ : Data labels box options
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *borderWidth;

-(NSDictionary *)getParams;

@end
