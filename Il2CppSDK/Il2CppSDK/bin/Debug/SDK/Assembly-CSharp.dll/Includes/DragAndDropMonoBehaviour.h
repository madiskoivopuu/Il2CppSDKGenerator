#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragAndDropMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragAndDropMonoBehaviour"));
	}

	template <typename R = int32_t> R& id() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action2<int32_t, uintptr_t>*& onBeginDrag() {
		return *(Action2<int32_t, uintptr_t>**)((uintptr_t)this + 0x20);
	}
	 Action2<int32_t, uintptr_t>*& onDrag() {
		return *(Action2<int32_t, uintptr_t>**)((uintptr_t)this + 0x28);
	}
	 Action2<int32_t, uintptr_t>*& onEndDrag() {
		return *(Action2<int32_t, uintptr_t>**)((uintptr_t)this + 0x30);
	}
	 Action2<int32_t, uintptr_t>*& onDrop() {
		return *(Action2<int32_t, uintptr_t>**)((uintptr_t)this + 0x38);
	}
	 Action2<int32_t, uintptr_t>*& onPointerDown() {
		return *(Action2<int32_t, uintptr_t>**)((uintptr_t)this + 0x40);
	}
	 Action3<bool, int32_t, float>*& OnClickHolded() {
		return *(Action3<bool, int32_t, float>**)((uintptr_t)this + 0x48);
	}
	 Action1<int32_t>*& onDoubleClick() {
		return *(Action1<int32_t>**)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = int32_t> R& _clicked() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& _clickDuration() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = float> R& _clickDelay() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	 Action3<bool, int32_t, float>* get_OnClickHolded() {
		return ((Action3<bool, int32_t, float>* (*)(DragAndDropMonoBehaviour*))(Il2CppBase() + 0x1304EE8))(this);
	}
	template <typename R = void> R set_OnClickHolded(Action3<bool, int32_t, float>* value) {
		return ((R (*)(DragAndDropMonoBehaviour*, Action3<bool, int32_t, float>*))(Il2CppBase() + 0x1304EF0))(this, value);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1304EF8))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1304FA0))(this, eventData);
	}
	template <typename R = void> R OnEndDrag(uintptr_t eventData) {
		return ((R (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1305014))(this, eventData);
	}
	template <typename R = void> R OnDrop(uintptr_t eventData) {
		return ((R (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1305088))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x13050FC))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x130516C))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(DragAndDropMonoBehaviour*))(Il2CppBase() + 0x13051EC))(this);
	}
	template <typename R = bool> R IsDoubleClick() {
		return ((R (*)(DragAndDropMonoBehaviour*))(Il2CppBase() + 0x13052B4))(this);
	}

};

