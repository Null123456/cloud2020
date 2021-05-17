package com.atguigu.springcloud.controller;



import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class PaymentController {

    @Value("${server.port}")
    private String port;

    @RequestMapping("/zk")
    public String paymentzk(){
        return "spring cloud with zookeeper  "+port;
    }
}
