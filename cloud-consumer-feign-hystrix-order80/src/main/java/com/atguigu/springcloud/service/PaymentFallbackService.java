package com.atguigu.springcloud.service;

import org.springframework.stereotype.Component;

@Component
public class PaymentFallbackService implements PaymentHystrixService{

    @Override
    public String paymentInfo_ok(Integer id) {
        return "PaymentFallbackService稍后尝试....";
    }

    @Override
    public String paymentInfo_Timeout(Integer id) {
        return "稍后尝试........";
    }
}
