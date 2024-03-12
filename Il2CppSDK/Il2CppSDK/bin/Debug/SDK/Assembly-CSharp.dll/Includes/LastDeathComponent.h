#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LastDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LastDeathComponent"));
	}

	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LastDeathComponent*, uintptr_t))(Il2CppBase() + 0x1429764))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LastDeathComponent*, uintptr_t))(Il2CppBase() + 0x1429800))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LastDeathComponent*, uintptr_t))(Il2CppBase() + 0x142989C))(this, writer);
	}

};

}
