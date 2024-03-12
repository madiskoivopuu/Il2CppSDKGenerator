#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicProgress"));
	}

	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _stackPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _stackText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _leftTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& IconId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _iconName() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(MagicProgress*))(Il2CppBase() + 0x1ADF510))(this);
	}
	template <typename T = Il2CppString*> T get_IconId() {
		return ((T (*)(MagicProgress*))(Il2CppBase() + 0x1ADF518))(this);
	}
	template <typename T = void> T set_IconId(Il2CppString* value) {
		return ((T (*)(MagicProgress*, Il2CppString*))(Il2CppBase() + 0x1ADF520))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(MagicProgress*))(Il2CppBase() + 0x1ADF528))(this);
	}
	template <typename T = void> T set_IconName(Il2CppString* value) {
		return ((T (*)(MagicProgress*, Il2CppString*))(Il2CppBase() + 0x1ADF530))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(MagicProgress*))(Il2CppBase() + 0x1ADF5A8))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(MagicProgress*, int32_t))(Il2CppBase() + 0x1ADF5B0))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(MagicProgress*))(Il2CppBase() + 0x1ADF750))(this);
	}
	template <typename T = void> T set_Progress(float value) {
		return ((T (*)(MagicProgress*, float))(Il2CppBase() + 0x1ADF76C))(this, value);
	}
	template <typename T = int64_t> T get_LeftTime() {
		return ((T (*)(MagicProgress*))(Il2CppBase() + 0x1ADF7A8))(this);
	}
	template <typename T = void> T set_LeftTime(int64_t value) {
		return ((T (*)(MagicProgress*, int64_t))(Il2CppBase() + 0x1ADF7E8))(this, value);
	}

};

}
