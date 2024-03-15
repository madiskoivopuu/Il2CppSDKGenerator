#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseMessageWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMessageWindowContext"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Message() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Button0() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Button1() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Action1int32_t>*& OnClose() {
		return *(Action1int32_t>**)((uintptr_t)this + 0x30);
	}

	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F450))(this);
	}
	template <typename R = UIWindowsLayerType*> R get_LayerType() {
		return ((R (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F458))(this);
	}
	template <typename R = Il2CppString*> R get_Caption() {
		return ((R (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F460))(this);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F468))(this);
	}
	template <typename R = Il2CppString*> R get_Button0() {
		return ((R (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F470))(this);
	}
	template <typename R = Il2CppString*> R get_Button1() {
		return ((R (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F478))(this);
	}
	 Action1int32_t>* get_OnClose() {
		return ((Action1int32_t>* (*)(BaseMessageWindowContext*))(Il2CppBase() + 0x166F480))(this);
	}

};

