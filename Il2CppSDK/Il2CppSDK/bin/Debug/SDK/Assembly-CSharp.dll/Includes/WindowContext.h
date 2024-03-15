#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WindowContext"));
	}

	template <typename R = Il2CppString*> R& BugCaption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = BugReportType> R& BugType() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BugReportPriority> R& BugPriority() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& OnBugReportSent() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(WindowContext*))(Il2CppBase() + 0xEEEBA0))(this);
	}
	template <typename R = UIWindowsLayerType> R get_LayerType() {
		return ((R (*)(WindowContext*))(Il2CppBase() + 0xEEEBA8))(this);
	}
	template <typename R = bool> R get_HasSimpleView() {
		return ((R (*)(WindowContext*))(Il2CppBase() + 0xEEEBB0))(this);
	}
	template <typename R = Il2CppString*> R get_BugCaption() {
		return ((R (*)(WindowContext*))(Il2CppBase() + 0xEEEC04))(this);
	}
	template <typename R = BugReportType> R get_BugType() {
		return ((R (*)(WindowContext*))(Il2CppBase() + 0xEEEC0C))(this);
	}
	template <typename R = BugReportPriority> R get_BugPriority() {
		return ((R (*)(WindowContext*))(Il2CppBase() + 0xEEEC14))(this);
	}

};

