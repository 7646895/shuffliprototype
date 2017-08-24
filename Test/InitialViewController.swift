//
//  InitialViewController.swift
//  Test
//
//  Created by Jessica Vilaysak on 21/8/17.
//  Copyright © 2017 Pranav Joshi. All rights reserved.
//

import UIKit

class InitialViewController: UIViewController {
    
    @IBAction func btnAdminCreator(_ sender: Any) {
        userObj.isAdmin = true;
        segueToLogin(vc_name: "VC_signin");
    }
    
    @IBAction func btnCreator(_ sender: Any) {
        userObj.isAdmin = false;
        segueToLogin(vc_name: "VC_manageusers");
    }
    
    func segueToLogin(vc_name: String) {
        let vc = storyboard?.instantiateViewController(withIdentifier: vc_name);
        present(vc!, animated: true, completion: nil);
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
    /*
     // MARK: - Navigation
     
     // In a storyboard-based application, you will often want to do a little preparation before navigation
     override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
     // Get the new view controller using segue.destinationViewController.
     // Pass the selected object to the new view controller.
     }
     */
    
}
