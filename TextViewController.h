//
//  TextViewController.h
//  QQApiDemo
//
//  Created by Tencent on 12-5-16.
//  Copyright 2012年 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TextViewControllerDelegate
- (void)onTextViewCancel;
- (void)onTextViewDone:(NSString*)text;
@end

@interface TextViewController : UIViewController<UITextViewDelegate>
{
    UITextView* _textView;
    UILabel*    _textLenLabel;
    id<TextViewControllerDelegate> _delegate;
}

@property (nonatomic, assign) id<TextViewControllerDelegate> delegate;

@end
