package com.atguigu.springcloud.controller;

import com.atguigu.springcloud.entities.CommonResult;
import com.atguigu.springcloud.entities.Payment;
import com.atguigu.springcloud.service.PaymentService;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.*;

@RestController
@Slf4j
public class PaymentController {
    @Autowired
    private PaymentService paymentService;
    @Value("${server.port}")
    private String port;

    @PostMapping("/create")
    public CommonResult<Integer> create(@RequestBody Payment payment){
        Integer result = paymentService.create(payment);
        log.info("******插入结果*****"+result);
        if(result>0){
            return new CommonResult<Integer>(200,"插入成功,server.port"+port,result);
        }else {
            return new CommonResult<>(444,"插入失败",null);
        }
    }

    @RequestMapping("/get/{id}")
    public CommonResult get(@PathVariable("id") Long id){
        Payment payment = paymentService.getPaymentById(id);
        log.info("******查询结果*****"+payment);
        if(payment !=null){
            return new CommonResult(200,"查询成功,server.port"+port,payment);
        }else {
            return new CommonResult(444,"查询失败",null);
        }
    }

    @GetMapping("/getLB")
    public String getPaymentLB(){
        return port;
    }
}
