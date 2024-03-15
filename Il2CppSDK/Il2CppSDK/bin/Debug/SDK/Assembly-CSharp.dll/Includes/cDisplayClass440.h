#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass440
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass44_0"));
	}

	template <typename R = NotificationsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& text() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R ShowErrorb__0(NotificationView* v) {
		return ((R (*)(cDisplayClass440*, NotificationView*))(Il2CppBase() + 0x10AC920))(this, v);
	}

};

