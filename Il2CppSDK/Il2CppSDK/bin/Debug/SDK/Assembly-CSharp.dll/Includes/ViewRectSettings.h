#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewRectSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewRectSettings"));
	}

	template <typename R = SystemType> R& DebugSystem() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ViewRect*> R& Default() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Setting*>*> R& Others() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = SystemType> R GetSystem() {
		return ((R (*)(ViewRectSettings*))(Il2CppBase() + 0x15CD59C))(this);
	}
	template <typename R = ViewRect*> R GetViewRect(float acpect) {
		return ((R (*)(ViewRectSettings*, float))(Il2CppBase() + 0x15CCFC0))(this, acpect);
	}

};

