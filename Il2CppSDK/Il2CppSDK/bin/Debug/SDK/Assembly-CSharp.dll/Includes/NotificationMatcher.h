#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationMatcher"));
	}

	 static IMatcher1NotificationEntity*>*& _matcherCount() {
		return *(IMatcher1NotificationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1NotificationEntity*>*& _matcherNotificationType() {
		return *(IMatcher1NotificationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1NotificationEntity*>*& _matcherText() {
		return *(IMatcher1NotificationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	 static IMatcher1NotificationEntity*>* get_Count() {
		return ((IMatcher1NotificationEntity*>* (*)(void *))(Il2CppBase() + 0x13B97CC))(0);
	}
	 static IMatcher1NotificationEntity*>* get_NotificationType() {
		return ((IMatcher1NotificationEntity*>* (*)(void *))(Il2CppBase() + 0x13B994C))(0);
	}
	 static IMatcher1NotificationEntity*>* get_Text() {
		return ((IMatcher1NotificationEntity*>* (*)(void *))(Il2CppBase() + 0x13B9AE8))(0);
	}
	 static IAllOfMatcher1NotificationEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1NotificationEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13B9C84))(0, indices);
	}
	 static IAllOfMatcher1NotificationEntity*>* AllOf_1(Il2CppArray<IMatcher1NotificationEntity*>*>* matchers) {
		return ((IAllOfMatcher1NotificationEntity*>* (*)(void *, Il2CppArray<IMatcher1NotificationEntity*>*>*))(Il2CppBase() + 0x13B9CFC))(0, matchers);
	}
	 static IAnyOfMatcher1NotificationEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1NotificationEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13B9D74))(0, indices);
	}
	 static IAnyOfMatcher1NotificationEntity*>* AnyOf_1(Il2CppArray<IMatcher1NotificationEntity*>*>* matchers) {
		return ((IAnyOfMatcher1NotificationEntity*>* (*)(void *, Il2CppArray<IMatcher1NotificationEntity*>*>*))(Il2CppBase() + 0x13B9DEC))(0, matchers);
	}

};

