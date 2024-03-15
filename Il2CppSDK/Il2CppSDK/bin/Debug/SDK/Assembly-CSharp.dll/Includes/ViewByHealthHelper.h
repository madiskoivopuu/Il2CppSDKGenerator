#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HideHelperListener.h" 

class ViewByHealthHelper : public HideHelperListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewByHealthHelper"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& _healthCoefName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _healthValueName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1float>*& _currentCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x30);
	}
	 Nullable1float>*& _currentValue() {
		return *(Nullable1float>**)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Execute(GameEntity* entity, float deltaTime) {
		return ((R (*)(ViewByHealthHelper*, GameEntity*, float))(Il2CppBase() + 0x15C7DEC))(this, entity, deltaTime);
	}

};

