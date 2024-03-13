#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMoveTargetView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMoveTargetView"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TextButtonMonoBehaviour*> T& RunButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TextButtonMonoBehaviour*> T& EnterButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

