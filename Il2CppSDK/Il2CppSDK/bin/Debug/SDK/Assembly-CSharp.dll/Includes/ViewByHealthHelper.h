#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HideHelperListener" 

class ViewByHealthHelper: HideHelperListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewByHealthHelper"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _healthCoefName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _healthValueName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _currentCoef() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _currentValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Execute(uintptr_t entity, float deltaTime) {
		return ((T (*)(ViewByHealthHelper*, uintptr_t, float))(Il2CppBase() + 0x15C7DEC))(this, entity, deltaTime);
	}

};

}
