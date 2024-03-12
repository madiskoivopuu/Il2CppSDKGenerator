#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountViewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountViewer"));
	}

	template <typename T = uintptr_t> T& _text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _countKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _progressParts() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _countViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CountViewer*))(Il2CppBase() + 0x1340F94))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CountViewer*))(Il2CppBase() + 0x1341028))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(CountViewer*, int32_t))(Il2CppBase() + 0x1340D1C))(this, value);
	}

};

}
