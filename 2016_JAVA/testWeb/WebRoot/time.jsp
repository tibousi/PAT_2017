<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1";page import="java.util.*"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>测试</title>
</head>
<body>
<%
Date d=new Date();
int hours=d.getHours();
int minutes=d.getMinutes();
int seconds=d.getSeconds();
String str=hours+":"+minutes+":"+seconds;
out.println(str);
 %>>
</body>
</html>