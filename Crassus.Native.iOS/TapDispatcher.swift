//
//  TapDispatcher.swift
//  TheObiG LLC
//
//  Created by SolomonRain on 2/18/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

import Foundation

@objc class TapDispatcher : NSObject, UIGestureRecognizerDelegate
{
    func dispatch(sender: AnyObject)
    {
        self.performSelector(Selector((((sender as! UITapGestureRecognizer).view) as! CrassusView).handler), withObject: (((sender as! UITapGestureRecognizer).view) as! CrassusView).superview)
    }
    
    func helloClick(sender: AnyObject)
    {
        HelloClick(Sublimate(sender))
    }
    
    func dismissKeyboardFromSubviews(containingView: AnyObject)
    {
        for view in (containingView as! UIView).subviews
        {
            dismissKeyboardFromSubviews(view)
            if let textField = view as? CrassusTextField
            {
                textField.resignFirstResponder()
            }
        }
    }
    
}