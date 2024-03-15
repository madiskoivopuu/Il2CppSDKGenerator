#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountViewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountViewer"));
	}

	template <typename R = uintptr_t> R& _text() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _countKey() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _progressParts() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _countViews() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(CountViewer*))(Il2CppBase() + 0x1340F94))(this);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(CountViewer*))(Il2CppBase() + 0x1341028))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(CountViewer*, int32_t))(Il2CppBase() + 0x1340D1C))(this, value);
	}

};

