#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class QuestPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "QuestPlayer"));
	}

	 static MessageParser1ProtoModels::QuestPlayer*>*& _parser() {
		return *(MessageParser1ProtoModels::QuestPlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ProgressPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& progressPoints_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UpdatedAtFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& updatedAt_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& RankFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rank_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::QuestPlayer*>* get_Parser() {
		return ((MessageParser1ProtoModels::QuestPlayer*>* (*)(void *))(Il2CppBase() + 0x1C39D48))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1C39DAC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C39ECC))(this);
	}
	template <typename R = ProtoModels::QuestPlayer*> R Clone() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C39FDC))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A038))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(QuestPlayer*, int64_t))(Il2CppBase() + 0x1C3A040))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A048))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(QuestPlayer*, Il2CppString*))(Il2CppBase() + 0x1C3A050))(this, value);
	}
	template <typename R = int32_t> R get_ProgressPoints() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A0D0))(this);
	}
	template <typename R = void> R set_ProgressPoints(int32_t value) {
		return ((R (*)(QuestPlayer*, int32_t))(Il2CppBase() + 0x1C3A0D8))(this, value);
	}
	template <typename R = int64_t> R get_UpdatedAt() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A0E0))(this);
	}
	template <typename R = void> R set_UpdatedAt(int64_t value) {
		return ((R (*)(QuestPlayer*, int64_t))(Il2CppBase() + 0x1C3A0E8))(this, value);
	}
	template <typename R = int32_t> R get_Rank() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A0F0))(this);
	}
	template <typename R = void> R set_Rank(int32_t value) {
		return ((R (*)(QuestPlayer*, int32_t))(Il2CppBase() + 0x1C3A0F8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(QuestPlayer*, Il2CppObject*))(Il2CppBase() + 0x1C3A100))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::QuestPlayer* other) {
		return ((R (*)(QuestPlayer*, ProtoModels::QuestPlayer*))(Il2CppBase() + 0x1C3A170))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A200))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A2CC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A330))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A440))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::QuestPlayer* other) {
		return ((R (*)(QuestPlayer*, ProtoModels::QuestPlayer*))(Il2CppBase() + 0x1C3A5BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A62C))(this, input);
	}

};

}
