#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass420
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass42_0"));
	}

	template <typename R = NotificationsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& text() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R ShowWarningb__0(NotificationView* v) {
		return ((R (*)(cDisplayClass420*, NotificationView*))(Il2CppBase() + 0x10AC798))(this, v);
	}

};

