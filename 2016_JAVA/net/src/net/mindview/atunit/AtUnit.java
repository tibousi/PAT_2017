package net.mindview.atunit;
import java.lang.annotation.*;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.io.*;
import java.util.*;
import net.mindview.util.*;
import static net.mindview.util.Print.*;
public class AtUnit implements ProcessFiles.Strategy{
	static Class<?> testClass;
	static List<String> failedTests=new ArrayList<String>();
	static long testsRun=0;
	static long failures=0;
	public static void main(String[] args)throws Exception{
		
	}
	@Override
	public void process(File cFile) {
		// TODO Auto-generated method stub
		try{
			String cName=ClassNameFinder.thisClass(BinaryFile.read(cFile));
			
		}
	}
	for(Method m:testMethods){
		printnb("  , "+m.getName()+" ");
		try{
			Object testObject=createTestObject(creator);
			boolean success=false;
			try{
				if(m.getReturnType().equals(boolean.class))
					success=(Boolean)m.invoke(testObject);
				else{
					m.invoke(testObject);
					success=true;
				}
			}catch(InvocationTargetException e){
				print(e.getCause());
			}
			print(succcess?"":(failed));
			testsRun++;
			if(!success){
				failures++;
				failedTests.add(testClass.getName()+": "+m.getName());
			}
			if(cleanup!=null)
				cleanup.
		}
	}	
}
