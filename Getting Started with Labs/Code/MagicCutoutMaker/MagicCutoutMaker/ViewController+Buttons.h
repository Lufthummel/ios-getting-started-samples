//
// Copyright (c) 2015 Adobe Systems Incorporated. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
//
//  ViewController+Buttons.h
//  MagicCutoutMaker
//

#import <UIKit/UIKit.h>

#define BUTTON_X_MARGIN                 0
#define BUTTON_Y_MARGIN                 20
#define BUTTON_Y_OFFSET                 0
#define BUTTON_WIDTH                    80
#define BUTTON_HEIGHT                   30

#define VIEW_Y_OFFSET                   (BUTTON_Y_MARGIN + (2*(BUTTON_Y_OFFSET+BUTTON_HEIGHT)))


@interface ViewController (Buttons)

- (void)addButtons;
- (UIActivityIndicatorView *)createSpinner;

@end

