/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/rp_widget.h"

namespace Ui {
class IconButton;
} // namespace Ui

namespace Editor {

class EdgeButton;
class HorizontalContainer;

class PhotoEditorControls final : public Ui::RpWidget {
public:
	PhotoEditorControls(
		not_null<Ui::RpWidget*> parent,
		bool doneControls = true);

	[[nodiscard]] rpl::producer<int> rotateRequests() const;
	[[nodiscard]] rpl::producer<> flipRequests() const;
	[[nodiscard]] rpl::producer<> paintModeRequests() const;

private:

	const style::color &_bg;
	const base::unique_qptr<HorizontalContainer> _buttonsContainer;
	const base::unique_qptr<Ui::IconButton> _rotateButton;
	const base::unique_qptr<Ui::IconButton> _flipButton;
	const base::unique_qptr<Ui::IconButton> _paintModeButton;
	const base::unique_qptr<EdgeButton> _cancel;
	const base::unique_qptr<EdgeButton> _done;

};

} // namespace Editor