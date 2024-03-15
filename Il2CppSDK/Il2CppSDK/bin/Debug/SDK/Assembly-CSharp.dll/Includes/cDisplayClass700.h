#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass700
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass70_0"));
	}

	template <typename R = NotificationsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& pointId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R ShowMapEventNotificationg__ShowMapEvent|0() {
		return ((R (*)(cDisplayClass700*))(Il2CppBase() + 0x10ACAA8))(this);
	}
	template <typename R = void> R ShowMapEventNotificationb__1(IUIWindow* w) {
		return ((R (*)(cDisplayClass700*, IUIWindow*))(Il2CppBase() + 0x10ACC04))(this, w);
	}

};

