#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseMessageWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMessageWindowContext"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Message() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Button0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Button1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnClose() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F450))(this);
	}
	template <typename T = uintptr_t> T get_LayerType() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F458))(this);
	}
	template <typename T = Il2CppString*> T get_Caption() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F460))(this);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F468))(this);
	}
	template <typename T = Il2CppString*> T get_Button0() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F470))(this);
	}
	template <typename T = Il2CppString*> T get_Button1() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F478))(this);
	}
	template <typename T = void*> T get_OnClose() {
		return ((T (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F480))(this);
	}

};

}
