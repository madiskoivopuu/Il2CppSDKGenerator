#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputConfig"));
	}

	template <typename R = Il2CppString*> static R& VERTICAL_AXIS_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HORIZONTAL_AXIS_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppString*> static R& VERTICAL_SKILL_SHOT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = Il2CppString*> static R& HORIZONTAL_SKILL_SHOT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = Il2CppString*> static R& VERTICAL_D_PAD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = Il2CppString*> static R& HORIZONTAL_D_PAD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = Il2CppString*> static R& ATTACK_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = Il2CppString*> static R& INTERACT_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = Il2CppString*> static R& POCKET1_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = Il2CppString*> static R& POCKET2_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = Il2CppString*> static R& POCKET3_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = Il2CppString*> static R& SKILLPOCKET1_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = Il2CppString*> static R& SKILLPOCKET2_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = Il2CppString*> static R& MOUNT_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = Il2CppString*> static R& MOUNTSKILL1_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = Il2CppString*> static R& MOUNTSKILL2_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = Il2CppString*> static R& MOUNTSKILL3_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = Il2CppString*> static R& CROUCH_BUTTON_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}


};

