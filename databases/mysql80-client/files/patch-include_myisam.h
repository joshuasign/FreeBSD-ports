--- include/myisam.h.orig	2018-04-08 06:44:49 UTC
+++ include/myisam.h
@@ -59,7 +59,7 @@
   The following defines can be increased if necessary.
   But beware the dependency of MI_MAX_POSSIBLE_KEY_BUFF and MI_MAX_KEY_LENGTH.
 */
-#define MI_MAX_KEY_LENGTH 1000 /* Max length in bytes */
+#define MI_MAX_KEY_LENGTH 4000 /* Max length in bytes */
 #define MI_MAX_KEY_SEG 16      /* Max segments for key */
 
 #define MI_MAX_KEY_BUFF (MI_MAX_KEY_LENGTH + MI_MAX_KEY_SEG * 6 + 8 + 8)
