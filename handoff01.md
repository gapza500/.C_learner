# Handoff 01 — Indoor Sensor Console

## Purpose

สร้างโปรแกรม C เพื่อจำลองส่วนรับและประมวลผลข้อมูลของอุปกรณ์ตรวจอากาศ ระหว่างรอ PCB

## Problem

โปรแกรมต้อง:

- รับข้อมูล sensor จำนวน 1–10 readings
- แต่ละ reading มี sensor ID, PM2.5, temperature และ humidity
- แสดงข้อมูลและสถานะของแต่ละ reading
- สรุปจำนวน valid/invalid readings
- สรุป average, minimum และ maximum PM2.5 ของ valid readings
- จัดการ input ที่ไม่ใช่ตัวเลขโดยไม่ crash

## Status rules

- `INVALID`: PM2.5 ติดลบ หรือ humidity อยู่นอกช่วง 0–100
- `WARNING`: valid และ PM2.5 มากกว่า 35.0
- `OK`: valid และ PM2.5 ไม่เกิน 35.0
- Invalid readings ต้องไม่ถูกนำไปคำนวณสถิติ
- ถ้าไม่มี valid reading ให้แสดง `No valid readings.`

## Success condition

- เขียนด้วย C
- Compile แล้วไม่มี warning
- ทำงานครบตามโจทย์
- README มีวิธี compile และ run
- ไม่ commit ไฟล์ executable

## Submit

ส่ง GitHub commit URL พร้อมบอกจุดที่ติดที่สุด
