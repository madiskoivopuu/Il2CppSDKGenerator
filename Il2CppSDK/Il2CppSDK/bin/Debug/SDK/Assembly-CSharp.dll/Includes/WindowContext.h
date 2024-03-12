#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WindowContext"));
	}

	template <typename T = Il2CppString*> T& BugCaption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BugType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BugPriority() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OnBugReportSent() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(WindowContext*))(Il2CppBase() + 0xEEEBA0))(this);
	}
	template <typename T = uintptr_t> T get_LayerType() {
		return ((T (*)(WindowContext*))(Il2CppBase() + 0xEEEBA8))(this);
	}
	template <typename T = bool> T get_HasSimpleView() {
		return ((T (*)(WindowContext*))(Il2CppBase() + 0xEEEBB0))(this);
	}
	template <typename T = Il2CppString*> T get_BugCaption() {
		return ((T (*)(WindowContext*))(Il2CppBase() + 0xEEEC04))(this);
	}
	template <typename T = uintptr_t> T get_BugType() {
		return ((T (*)(WindowContext*))(Il2CppBase() + 0xEEEC0C))(this);
	}
	template <typename T = uintptr_t> T get_BugPriority() {
		return ((T (*)(WindowContext*))(Il2CppBase() + 0xEEEC14))(this);
	}

};

}
