#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicProgress"));
	}

	template <typename R = uintptr_t> R& _image() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _stackPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _stackText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1int64_t>*& _leftTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& IconId() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _iconName() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = uintptr_t> R get_Animator() {
		return ((R (*)(MagicProgress*))(Il2CppBase() + 0x1ADF510))(this);
	}
	template <typename R = Il2CppString*> R get_IconId() {
		return ((R (*)(MagicProgress*))(Il2CppBase() + 0x1ADF518))(this);
	}
	template <typename R = void> R set_IconId(Il2CppString* value) {
		return ((R (*)(MagicProgress*, Il2CppString*))(Il2CppBase() + 0x1ADF520))(this, value);
	}
	template <typename R = Il2CppString*> R get_IconName() {
		return ((R (*)(MagicProgress*))(Il2CppBase() + 0x1ADF528))(this);
	}
	template <typename R = void> R set_IconName(Il2CppString* value) {
		return ((R (*)(MagicProgress*, Il2CppString*))(Il2CppBase() + 0x1ADF530))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(MagicProgress*))(Il2CppBase() + 0x1ADF5A8))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(MagicProgress*, int32_t))(Il2CppBase() + 0x1ADF5B0))(this, value);
	}
	template <typename R = float> R get_Progress() {
		return ((R (*)(MagicProgress*))(Il2CppBase() + 0x1ADF750))(this);
	}
	template <typename R = void> R set_Progress(float value) {
		return ((R (*)(MagicProgress*, float))(Il2CppBase() + 0x1ADF76C))(this, value);
	}
	template <typename R = int64_t> R get_LeftTime() {
		return ((R (*)(MagicProgress*))(Il2CppBase() + 0x1ADF7A8))(this);
	}
	template <typename R = void> R set_LeftTime(int64_t value) {
		return ((R (*)(MagicProgress*, int64_t))(Il2CppBase() + 0x1ADF7E8))(this, value);
	}

};

