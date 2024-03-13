#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestCategoryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestCategoryView"));
	}

	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& captionLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& activeTextColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& inactiveTextColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& activeBack() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& inactiveBack() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& notificationsRoot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& notificationsText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Func1ValueTuple2bool, Il2CppString*>*>*> T& notifyFunc() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_Toggle() {
		return ((T (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6CC4))(this);
	}
	template <typename T = uintptr_t> T get_ActiveTextColor() {
		return ((T (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6CCC))(this);
	}
	template <typename T = uintptr_t> T get_InactiveTextColor() {
		return ((T (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6CD8))(this);
	}
	template <typename T = void> T Bind(Il2CppString* categoryName, uintptr_t onSelect, Func1ValueTuple2bool, Il2CppString*>*>* notifyFunc) {
		return ((T (*)(QuestCategoryView*, Il2CppString*, uintptr_t, Func1ValueTuple2bool, Il2CppString*>*>*))(Il2CppBase() + 0x11C6CE4))(this, categoryName, onSelect, notifyFunc);
	}
	template <typename T = void> T OnUpdateDraw() {
		return ((T (*)(QuestCategoryView*))(Il2CppBase() + 0x11C6EA4))(this);
	}

};

