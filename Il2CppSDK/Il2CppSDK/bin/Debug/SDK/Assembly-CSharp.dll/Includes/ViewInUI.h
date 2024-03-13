#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewInUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewInUI"));
	}

	template <typename T = HashSet1ViewInUI*>*> static T& Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Action1ViewInUI*>*> static T& AddEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Action1ViewInUI*>*> static T& RemoveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = UIView*> T& UIViewPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Params() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _started() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = HashSet1ViewInUI*>*> static T get_Set() {
		return ((T (*)(void *))(Il2CppBase() + 0x15CB26C))(0);
	}
	template <typename T = void> static T set_Set(HashSet1ViewInUI*>* value) {
		return ((T (*)(void *, HashSet1ViewInUI*>*))(Il2CppBase() + 0x15CB2D0))(0, value);
	}
	template <typename T = void> static T add_AddEvent(Action1ViewInUI*>* value) {
		return ((T (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB33C))(0, value);
	}
	template <typename T = void> static T remove_AddEvent(Action1ViewInUI*>* value) {
		return ((T (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB434))(0, value);
	}
	template <typename T = void> static T add_RemoveEvent(Action1ViewInUI*>* value) {
		return ((T (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB52C))(0, value);
	}
	template <typename T = void> static T remove_RemoveEvent(Action1ViewInUI*>* value) {
		return ((T (*)(void *, Action1ViewInUI*>*))(Il2CppBase() + 0x15CB624))(0, value);
	}
	template <typename T = int32_t> T get_TargetId() {
		return ((T (*)(ViewInUI*))(Il2CppBase() + 0x15CB71C))(this);
	}
	template <typename T = void> T set_TargetId(int32_t value) {
		return ((T (*)(ViewInUI*, int32_t))(Il2CppBase() + 0x15CB724))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ViewInUI*))(Il2CppBase() + 0x15CB72C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ViewInUI*))(Il2CppBase() + 0x15CB738))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ViewInUI*))(Il2CppBase() + 0x15CB868))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ViewInUI*))(Il2CppBase() + 0x15CB990))(this);
	}

};

