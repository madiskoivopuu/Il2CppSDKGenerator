#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RGSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSaveComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RGSaveComponent*, uintptr_t))(Il2CppBase() + 0x170C974))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RGSaveComponent*, uintptr_t))(Il2CppBase() + 0x170CA8C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RGSaveComponent*, uintptr_t))(Il2CppBase() + 0x170CC80))(this, writer);
	}

};

}
