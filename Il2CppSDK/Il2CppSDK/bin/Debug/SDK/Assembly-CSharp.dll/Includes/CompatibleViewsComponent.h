#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompatibleViewsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompatibleViewsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& NotItems() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R IsCompatibleWith(Il2CppString* name) {
		return ((R (*)(CompatibleViewsComponent*, Il2CppString*))(Il2CppBase() + 0xE2CFB4))(this, name);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CompatibleViewsComponent*, Il2CppObject*))(Il2CppBase() + 0xE2D050))(this, targetObject);
	}

};

