package net.mindview.atunit;
import java.lang.annotation.*;
@Target({ElementType.FIELD,ElementType.METHOD})
@Retention(RetentionPolicy.RUNTIME)
public @interface TestProperty {
	
}
