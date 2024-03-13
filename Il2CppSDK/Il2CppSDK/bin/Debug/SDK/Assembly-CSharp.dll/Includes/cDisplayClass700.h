#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass700
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass70_0"));
	}

	template <typename T = NotificationsWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pointId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowMapEventNotificationg__ShowMapEvent|0() {
		return ((T (*)(cDisplayClass700*))(Il2CppBase() + 0x10ACAA8))(this);
	}
	template <typename T = void> T ShowMapEventNotificationb__1(IUIWindow* w) {
		return ((T (*)(cDisplayClass700*, IUIWindow*))(Il2CppBase() + 0x10ACC04))(this, w);
	}

};

