#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Button
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Button"));
	}

	template <typename T = Il2CppString*> T& Dialogue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Label() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& EnableCondition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& OnClickCondition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& DropNextButtons() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

}
