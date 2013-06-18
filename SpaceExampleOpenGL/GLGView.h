//
//  GLGView.h
//  SpaceExampleOpenGL
//
//  Created by Tim Jarratt on 6/18/13.
//
//

#import <OpenGL/gl.h>
#import <Cocoa/Cocoa.h>

@protocol GLGOpenGLViewDelegate;

@interface GLGView : NSOpenGLView {
    // glVertex3f clearColor;
    id delegate;
}

- (void) setDelegate: (id) delegate;
@end

@protocol GLGOpenGLViewDelegate <NSObject>

@required
- (void)prepareOpenGL;

@optional
- (void)GLGOpenGLView:(NSOpenGLView *)view drawInRect:(NSRect)rect;
- (void)GLGOpenGLViewDidReshape:(NSOpenGLView *)view;


@end