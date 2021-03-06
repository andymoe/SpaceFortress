//
//  GLGSolarStar.h
//  SpaceExampleOpenGL
//
//  Created by Tim Jarratt on 6/18/13.
//
//
#import <Foundation/Foundation.h>
#import "RangeProperty.h"

/*
facts:
  85% of all stars are red dwarfs
*/

@interface GLGSolarStar : NSObject {
    CGFloat mass;
    CGFloat surface_temperature;
    NSUInteger rotation_rate_in_seconds;
    NSString *name;
    
    // percentage of its mass not derived from H, HE
    // http://en.wikipedia.org/wiki/Metallicity
    CGFloat metallicity;
    
    NSString *classification;
}

@property CGFloat age;
@property CGFloat radius;
@property (retain) NSColor *color;

// classification (O B A B G K M)
// http://en.wikipedia.org/wiki/Spectral_classification
- (NSString *) spectralClassification;
- (CGFloat) luminosity;
- (CGFloat) escapeVelocity;
- (void) describe;

// UI methods
- (CGFloat) radius_comparison;
- (CGFloat) mass_comparison;
- (CGFloat) surface_temperature_comparison;
- (CGFloat) metallicity_comparison;

@end
