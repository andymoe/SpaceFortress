//
//  BasicOpenGLController.h
//  SpaceExampleOpenGL
//
//  Created by Tim Jarratt on 6/17/13.
//
//

#import <OpenGL/OpenGL.h>
#import <Foundation/Foundation.h>

#import "GLGView.h"

@interface BasicOpenGLController : NSViewController <GLGOpenGLViewDelegate> {
    NSWindow *window;
    GLGView *scene;
}

- (id) initWithWindow: (NSWindow *) window;

- (void) update;
- (void) prepareOpenGL;
- (void) BasicOpenGLView:(NSOpenGLView *)view drawInRect:(NSRect)rect;
- (void) BasicOpenGLViewDidReshape:(NSOpenGLView *)view;

@end