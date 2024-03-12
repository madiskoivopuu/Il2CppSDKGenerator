#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListComponent`1" 

class UnlockedEmojisComponent: TypeListComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedEmojisComponent"));
	}

	template <typename T = int32_t> T& NewEmojisCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UnlockedEmojisComponent*, uintptr_t))(Il2CppBase() + 0x153AFC0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UnlockedEmojisComponent*, uintptr_t))(Il2CppBase() + 0x153B168))(this, writer);
	}

};

}
