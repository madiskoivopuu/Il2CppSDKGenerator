#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewRectSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewRectSettings"));
	}

	template <typename T = SystemType*> T& DebugSystem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ViewRect*> T& Default() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Others() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = SystemType*> T GetSystem() {
		return ((T (*)(ViewRectSettings*))(Il2CppBase() + 0x15CD59C))(this);
	}
	template <typename T = ViewRect*> T GetViewRect(float acpect) {
		return ((T (*)(ViewRectSettings*, float))(Il2CppBase() + 0x15CCFC0))(this, acpect);
	}

};

