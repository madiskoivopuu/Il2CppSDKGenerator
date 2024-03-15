#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMoveTargetView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMoveTargetView"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TextButtonMonoBehaviour*> R& RunButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TextButtonMonoBehaviour*> R& EnterButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

