package com.atguigu.springcloud.controller;


import com.atguigu.springcloud.entities.CommonResult;
import com.atguigu.springcloud.entities.Payment;
import com.atguigu.springcloud.lb.LoadBalancer;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.cloud.client.ServiceInstance;
import org.springframework.cloud.client.discovery.DiscoveryClient;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;

import java.net.URI;
import java.util.List;

@RestController
public class OrderController {

    @Autowired
    private RestTemplate restTemplate;

    @Autowired
    DiscoveryClient discoveryClient;
    @Autowired
    LoadBalancer loadBalancer;


    @GetMapping("/consumer")
    public CommonResult<Payment> creat(Payment payment){
       //return restTemplate.postForObject("http://localhost:8001/create",payment,CommonResult.class);
        return restTemplate.postForObject("http://CLOUD-PAYMENT-SERVICE/create",payment,CommonResult.class);
    }

    @GetMapping("/consumer/get/{id}")
    public CommonResult<Payment> get(@PathVariable("id") Long id){
        System.out.println(id);
        //return restTemplate.getForObject("http://localhost:8001/get/"+id,CommonResult.class);
        return restTemplate.getForObject("http://CLOUD-PAYMENT-SERVICE/get/"+id,CommonResult.class);
    }

    //自己设置负载均衡算法
    /*@GetMapping("/consumer/getLB")
    public String getpaymentLB(){
        List<ServiceInstance> instances = discoveryClient.getInstances("CLOUD-PAYMENT-SERVICE");
        if(instances == null || instances.size() <= 0){
            return null;
        }
        ServiceInstance serviceInstance = loadBalancer.instances(instances);
        URI uri = serviceInstance.getUri();
        return restTemplate.getForObject(uri+"/getLB",String.class);
    }*/

}
