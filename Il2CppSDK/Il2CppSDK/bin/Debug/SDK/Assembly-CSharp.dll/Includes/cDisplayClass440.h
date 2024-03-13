#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass440
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass44_0"));
	}

	template <typename T = NotificationsWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowErrorb__0(NotificationView* v) {
		return ((T (*)(cDisplayClass440*, NotificationView*))(Il2CppBase() + 0x10AC920))(this, v);
	}

};

