#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionComponent"));
	}

	template <typename T = Il2CppString*> T& HideMagic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LoadedMagic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FearMagic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& BubbleLifetime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& CanGoThrowDoors() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LeavepointBlueprint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Leavepoints() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ProductionComponent*, uintptr_t))(Il2CppBase() + 0x16E4D60))(this, targetObject);
	}

};

}
