#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapNotifyComponent"));
	}

	template <typename R = int32_t> R& MinTimeToEnd() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& CheckLevel() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MapNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0x12BEAF0))(this, target);
	}

};

