/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* Any commercial use of Highcharts iOS wrapper (beta version) is prohibited.
* In case of questions, please contact sales@highsoft.com
*/

#import "HIPlotOptionsPolygonPointEvents.h"


/**
* description: Properties for each single point
*/
@interface HIPlotOptionsPolygonPoint: HIChartsJSONSerializable

/**
* description: Events for each single point
*/
@property(nonatomic, readwrite) HIPlotOptionsPolygonPointEvents *events;

-(NSDictionary *)getParams;

@end
