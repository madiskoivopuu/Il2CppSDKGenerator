#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestCategoryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestCategoryView"));
	}

	template <typename R = uintptr_t> R& toggle() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& captionLabel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& activeTextColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& inactiveTextColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& activeBack() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& inactiveBack() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& notificationsRoot() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& notificationsText() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Func1<ValueTuple2<bool, Il2CppString*>*>*& notifyFunc() {
		return *(Func1<ValueTuple2<bool, Il2CppString*>*>**)((uintptr_t)this + 0x68);
	}

	template <typename R = uintptr_t> R get_Toggle() {
		return ((R (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6CC4))(this);
	}
	template <typename R = uintptr_t> R get_ActiveTextColor() {
		return ((R (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6CCC))(this);
	}
	template <typename R = uintptr_t> R get_InactiveTextColor() {
		return ((R (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6CD8))(this);
	}
	template <typename R = void> R Bind(Il2CppString* categoryName, uintptr_t onSelect, Func1<ValueTuple2<bool, Il2CppString*>*>* notifyFunc) {
		return ((R (*)(QuestCategoryView*, Il2CppString*, uintptr_t, Func1<ValueTuple2<bool, Il2CppString*>*>*))(Il2CppBase() + 0x11C6CE4))(this, categoryName, onSelect, notifyFunc);
	}
	template <typename R = void> R OnUpdateDraw() {
		return ((R (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6EA4))(this);
	}

};

