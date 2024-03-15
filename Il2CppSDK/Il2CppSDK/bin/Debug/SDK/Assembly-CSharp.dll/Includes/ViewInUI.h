#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewInUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewInUI"));
	}

	 static HashSet1ViewInUI*>*& Set() {
		return *(HashSet1ViewInUI*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1ViewInUI*>*& AddEvent() {
		return *(Action1ViewInUI*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Action1ViewInUI*>*& RemoveEvent() {
		return *(Action1ViewInUI*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = UIView*> R& UIViewPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Params() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _started() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	 static HashSet1ViewInUI*>* get_Set() {
		return ((HashSet1ViewInUI*>* (*)(void *))(Il2CppBase() + 0x15CB26C))(0);
	}
	template <typename R = void> static R set_Set(HashSet1ViewInUI*>* value) {
		return ((R (*)(void *, HashSet1ViewInUI*>*))(Il2CppBase() + 0x15CB2D0))(0, value);
	}
	template <typename R = void> static R add_AddEvent(Action1ViewInUI*>* value) {
		return ((R (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB33C))(0, value);
	}
	template <typename R = void> static R remove_AddEvent(Action1ViewInUI*>* value) {
		return ((R (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB434))(0, value);
	}
	template <typename R = void> static R add_RemoveEvent(Action1ViewInUI*>* value) {
		return ((R (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB52C))(0, value);
	}
	template <typename R = void> static R remove_RemoveEvent(Action1ViewInUI*>* value) {
		return ((R (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB624))(0, value);
	}
	template <typename R = int32_t> R get_TargetId() {
		return ((R (*)(ViewInUI*))(Il2CppBase() + 0x15CB71C))(this);
	}
	template <typename R = void> R set_TargetId(int32_t value) {
		return ((R (*)(ViewInUI*, int32_t))(Il2CppBase() + 0x15CB724))(this, value);
	}
	template <typename R = void> R Start() {
		return ((R (*)(ViewInUI*))(Il2CppBase() + 0x15CB72C))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ViewInUI*))(Il2CppBase() + 0x15CB738))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ViewInUI*))(Il2CppBase() + 0x15CB868))(this);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(ViewInUI*))(Il2CppBase() + 0x15CB990))(this);
	}

};

